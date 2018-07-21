// Based on code from Vuenctools for Eden || http://forum.edengame.net/index.php?/topic/295-vuenctools-for-eden-eden-world-manipulation-tool/
// with help from Robert Munafo || http://www.mrob.com/pub/vidgames/eden-file-format.html

#include <iostream>
#include <map>
#include <fstream>
#include <vector>

using namespace std;

int LoadWorld()
{
  //map<vector<int>, int> blocks;

  // Used this to store the map in a raw hex format
  vector <int> bytes;
  const char *filename = "DirectCity.eden";

  // Stores a single hex symbols
  unsigned char x;
  std::ifstream input(filename, std::ios::binary);
  input >> std::noskipws;
  while (input >> x)
  {
    // We'll store the hex symbol in decimal format
    bytes.push_back((int)x);
  }

  // Nobody really knows how this works
  int chunkPointerStartIndex = bytes[35] * 256 * 256 * 256 + bytes[34] * 256 * 256 + bytes[33] * 256 + bytes[32];

  cout << " ChunkPointerStartIndex: " << chunkPointerStartIndex << endl;

  vector <char> nameArray;

  cout << "World Name (decimal): ";
  for (int i = 35; i < 35+50; i++)
  {
    cout << bytes[i] << " ";
    nameArray.push_back(static_cast<char>(bytes[i]));
  }
  cout << endl;

  cout << "World Name (ASCII): ";
  for (int i = 0; i < nameArray.size(); i++)
  {
      cout << nameArray[i];
  }
  cout << endl;

  map<int, int> chunksX;
  map<int, int> chunksY;
  int currentChunkPointerIndex = chunkPointerStartIndex;

  int worldAreaWidthTemp = 0;
  int worldAreaHeightTemp = 0;

  // Get the min X value by finding the last value in chunks
  int worldAreaX = 0;

  // Get the min Y value by finding the last value in chunks
  int worldAreaY = 0;

  // Associate the chunk position with the chunk address in the map (chunks)
  do
  {
    // Find chunk address
    int address = bytes[currentChunkPointerIndex + 11] * 256 * 256 * 256 + bytes[currentChunkPointerIndex + 10] * 256 * 256 + bytes[currentChunkPointerIndex + 9] * 256 + bytes[currentChunkPointerIndex + 8];

    // Find the position of the chunk
    int x = bytes[currentChunkPointerIndex + 1] * 256 + bytes[currentChunkPointerIndex];
    int y = bytes[currentChunkPointerIndex + 5] * 256 + bytes[currentChunkPointerIndex + 4];

    if (worldAreaX > x){
      worldAreaX = x;
    }
    if (worldAreaY > y){
      worldAreaY = y;
    }

    if (worldAreaWidthTemp < x){
      worldAreaWidthTemp = x;
    }
    if (worldAreaHeightTemp < y){
      worldAreaHeightTemp = y;
    }

    string position = x + "|" + y;

    cout << address << ": " << endl;
    cout << x << endl;
    cout << y << endl;

    chunksX[address] = x;
    chunksY[address] = y;
  } while ((currentChunkPointerIndex += 16) < bytes.size());

  cout << "Chunks size: " << chunksX.size() << endl;

  // Get the total world width | max - min + 1
  int worldAreaWidth = worldAreaWidthTemp - worldAreaX + 1;

  // Get the total world height | max - min + 1
  int worldAreaHeight = worldAreaHeightTemp - worldAreaY + 1;

  //vector <int> map = worldAreaWidth * 16, worldAreaHeight * 16, 64, 2;
  map<vector<int>, int> blocks;

  // Grab block info
  for (int i = 0; i < chunksX.size(); i++)
  {
    // Whatever this does
    int baseX = (chunksX[i] - worldAreaX) * 16, baseY = (chunksY[i] - worldAreaY) * 16;
    for (int baseHeight = 0; baseHeight < 4; baseHeight++)
    {
      for (int x = 0; x < 16; x++)
      {
        for (int y = 0; y < 16; y++)
        {
          for (int z = 0; z < 16; z++)
          {
            cout << " ===== " << x << " | " << y << " | " << z << " ===== " << endl;
          // Get block id
          vector<int> id;
          id.push_back(baseX + x);
          id.push_back(baseY + y);
          id.push_back(baseHeight * 16 + z);
          id.push_back(0);

          blocks[id] = bytes[i + baseHeight * 8192 + x * 256 + y * 16 + z];

          cout << "Block id: " << bytes[i + baseHeight * 8192 + x * 256 + y * 16 + z] << endl;

          // Get block color
          vector<int> color;
          color.push_back(baseX + x);
          color.push_back(baseY + y);
          color.push_back(baseHeight * 16 + z);
          color.push_back(1);

          blocks[color] = bytes[i + baseHeight * 8192 + x * 256 + y * 16 + z + 4096];

          cout << "Color id: " << bytes[i + baseHeight * 8192 + x * 256 + y * 16 + z + 4096] << endl;
          }
        }
      }
    }
  }


  return 0;
}


int main()
{
  cout<<"Bootup inititated!"<<endl;

  LoadWorld();

  return 0;
}
