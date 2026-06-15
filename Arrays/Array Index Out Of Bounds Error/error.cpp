#include <bits/stdc++.h>
using namespace std;

int main() {
    array<int,5> arr = {1,2,3,4,5};
    int arr1[5]= {1,2,3,4,5};
    cout<<arr.at(-100)<<endl;
    cout<<arr[-100]<<endl;
    cout<<arr1[-50]<<endl;
    
    return 0;
}

// In C++, accessing an array index out of bounds results in Undefined Behavior (UB), meaning the language itself does not perform automatic runtime bounds checking. Unlike languages like Java or Python, the C++ compiler will not automatically throw an exception or stop your program when a traditional array boundary is breached.Consequences of Out of Bounds AccessWhen you access memory outside an array's valid indices (0 to size-1), your program might:Read garbage values from adjacent memory.Corrupt other variables or data structures by writing over them.Trigger a Segmentation Fault (crash) if it accesses unallocated memory.Seemingly work perfectly fine during local tests but fail randomly in production.