#include <iostream>
#include <map>
#include <fstream>
#include <vector>

using namespace std;

int LoadWorld()
{
  cout<<"Bootup inititated!"<<endl;

  vector <int> bytes;

/*
  const char *filename = "DirectCity.eden";
  ifstream infile(filename, fstream::in);

  unsigned int a;
  infile >> a;
  cout << a;

  cout << "Woah";*/

  unsigned char x;
  std::ifstream input("DirectCity.eden", std::ios::binary);
  input >> std::noskipws;
  while (input >> x)
  {
    //int bytes [input.Length];
    //std::cout << std::hex << (int)x;
    bytes.push_back((int)x);
  }
/*
  for (int i = 0; i < bytes.size(); i++)
  {
    cout << bytes[i];
  }*/

  // Nobody really knows how this works
  int chunkPointerStartIndex = bytes[35] * 256 * 256 * 256 + bytes[34] * 256 * 256 + bytes[33] * 256 + bytes[32];

  //bytes[21] bytes[21+40]

  vector <int> nameArray; //= bytes.TakeWhile((b, i) => (i < 40 || b != 0)).ToArray();

  for (int i = 35; i < 35+50; i++)
  {
    nameArray.push_back(bytes[i]);
  }

  cout << "World Name (decimal): ";

  for (int i = 0; i < nameArray.size(); i++)
  {
    cout << nameArray[i] << " ";
  }

  cout << endl;

/*
  do
  {
      chunks.Add(
          bytes[currentChunkPointerIndex + 11] * 256 * 256 * 256 + bytes[currentChunkPointerIndex + 10] * 256 * 256 + bytes[currentChunkPointerIndex + 9] * 256 + bytes[currentChunkPointerIndex + 8],//Adress
          new Point(bytes[currentChunkPointerIndex + 1] * 256 + bytes[currentChunkPointerIndex], bytes[currentChunkPointerIndex + 5] * 256 + bytes[currentChunkPointerIndex + 4])); //Position
  } while ((currentChunkPointerIndex += 16) < bytes.Length);
*/
  cout << " ChunkPointerStartIndex: " << chunkPointerStartIndex << endl;

  vector <char> nameArray2;
  cout << "World Name (ASCII): ";

  for (int i = 0; i < nameArray.size(); i++)
  {
      nameArray2.push_back(static_cast<char>(nameArray[i]));
      cout << nameArray2[i];
  }

  cout << endl;

  return 0;
}


int main()
{
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
