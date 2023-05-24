#include <iostream>
#include <vector>

class DNC {
  public:
    DNC() : 
      id_(-1),
      init_size_(32*1024),
      spad_size_(4*1024*1024) {
        std::cout << "DNC(" << id_ << ") is created!" << std::endl;
    }

    DNC(int id) : 
      id_(id),
      init_size_(32*1024),
      spad_size_(4*1024*1024) {
        std::cout << "DNC(" << id_ << ") is created!" << std::endl;
    }
    
    int GetId() {
      return id_;
    }

    int GetInitSize() {
      return init_size_;
    }

    int GetSpadSize() {
      return spad_size_;
    }

  private:
    int id_;
    int init_size_;
    int spad_size_;
};

class ATOM {
  public:
//    ATOM(int num_dnc) : 
//      num_dnc_(num_dnc),
//      dnc_vec_(8, DNC()) {
//        std::cout << "ATOM(" << num_dnc << " core) is created!" << std::endl;
//      }
    ATOM(int num_dnc) : 
      num_dnc_(num_dnc) {
        std::cout << "ATOM(" << num_dnc << " core) is created!" << std::endl;
        InitDNC();
      }

    void InitDNC() {
      for (int i = 0; i < num_dnc_; i++) {
        dnc_vec_.push_back(DNC(i));
      }
    }

    void PrintDNCList() {
      for (size_t i = 0; i < dnc_vec_.size(); i++) {
        std::cout << "DNC: " << dnc_vec_[i].GetId() << std::endl;
      }
    }
    
    std::vector<DNC> dnc_vec_;

  private:
    int num_dnc_;
};


int main() {
  ATOM atom(8);
  std::cout << "atom.dnc_vec_.size(): " << atom.dnc_vec_.size() << std::endl;
  atom.PrintDNCList();
  return 0;
}
