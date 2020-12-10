#include <vector>

int bs(std::vector<int> a,int key){
    int ok=-1;
    int ng=a.size();
    while(ng-ok>1){
        int mid=(ok+ng)/2;
        if(a[mid]==key) return mid;
        if(a[mid]>key) {
            ng=mid;
        }else{
            ok=mid;
        }
    }
    return -1;
}