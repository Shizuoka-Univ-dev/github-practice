#include <vector>

int bs(std::vector<int> a,int key){
    int ok=0;
    int ng=a.size();
    while(ng-ok>1){
        int mid=(ok+ng)/2;
        if(a[mid]==key) return key;
        if(a[mid]>key) {
            ng=mid;
            continue;
        }else{
            ok=mid;
            continue;
        }
    }
    return -1;
}