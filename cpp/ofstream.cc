#include <iostream>
#include <fstream>

void InitializeMemoryMapTextFile(const std::string dst_path) {
	int total_size_ = 1024;
	int kBytePerLine = 128;
	int kNumBanks = 4;
  std::ofstream outfile(dst_path.c_str());
  int temp_addr = 0;
  for (int i = 0; i < total_size_ / kBytePerLine; i++) {
    int bank = temp_addr % kNumBanks;
    int line = temp_addr / kNumBanks;
    outfile << std::hex << bank << " " << line << " ";
    temp_addr++;
    for (int j = 127; j >= 0; j--) {
      outfile << 0 << 0;
    }
    if (i != total_size_ / kBytePerLine - 1) {
      outfile << std::endl;
    }
  }
}


int main() {
	InitializeMemoryMapTextFile("./outfile.txt");
	return 1;
}
