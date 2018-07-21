// Based on code from Vuenctools for Eden || http://forum.edengame.net/index.php?/topic/295-vuenctools-for-eden-eden-world-manipulation-tool/
// with help from Robert Munafo || http://www.mrob.com/pub/vidgames/eden-file-format.html#vuenc

#include <iostream>
#include <map>
#include <fstream>
#include <vector>

using namespace std;

int LoadWorld()
{
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

  cout << " ChunkPointerStartIndex: " << chunkPointerStartIndex << endl;

/*
  do
  {
      chunks.Add(
          bytes[currentChunkPointerIndex + 11] * 256 * 256 * 256 + bytes[currentChunkPointerIndex + 10] * 256 * 256 + bytes[currentChunkPointerIndex + 9] * 256 + bytes[currentChunkPointerIndex + 8],//Adress
          new Point(bytes[currentChunkPointerIndex + 1] * 256 + bytes[currentChunkPointerIndex], bytes[currentChunkPointerIndex + 5] * 256 + bytes[currentChunkPointerIndex + 4])); //Position
  } while ((currentChunkPointerIndex += 16) < bytes.Length);
*/

  return 0;
}


int main()
{
    cout<<"Bootup inititated!"<<endl;

  // Used this to store the map in a raw hex format
  char Map;

  // Name of the world
  string Name;

  // Used to associate chuck pointers with chunks
  std::map<int, std::string> Chunks;

  //Rectangle WorldArea = default(Rectangle);

  char otherBytes; //Header, 12000 creature bytes, chunk pointers

  LoadWorld();

  return 0;
}
