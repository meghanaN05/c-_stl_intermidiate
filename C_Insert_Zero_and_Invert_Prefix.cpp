#include <iostream>
#include <vector>


int main() {
    int t;
   std:: cin>>t;
    while(t--){
int n;
    std::cin >> n;
    
    std::vector<int> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    
   
    if (a[n - 1] == 1) {
        std::cout << "NO" << std::endl;
        return 0;
    }
    
 
    std::cout << "YES" << std::endl;
    std::vector<int> simpleArrayLengths;
    int currentLength = 0;

   
    for (int i = 0; i < n; i++) {
        if (a[i] == 1) {
            currentLength++;
        } else {
            
            simpleArrayLengths.push_back(currentLength + 1);
            currentLength = 0;
        }
    }

  
    for (int i = simpleArrayLengths.size() - 1; i >= 0; i--) {
        for (int j = 0; j < simpleArrayLengths[i] - 1; j++) {
            std::cout << "0 ";
        }
        std::cout << simpleArrayLengths[i] - 1;
        if (i > 0) std::cout << " ";
    }
    std::cout << std::endl;
    }
    

    return 0;
}
