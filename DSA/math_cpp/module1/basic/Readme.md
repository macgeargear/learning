# CPP tips

## For fast input and output, we below before any cin or cout
- Turns off synchonization of c++ standard
- streams with the coressponding c stand
- streams

``` c++
ios_base::sync_with_sdio(false);

//Untie input and output stream ()
cin.tie(NULL);

```

- always use "\n" over endl for new line

## Using typedef and Macros in c++

``` c++
typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vll;
typedef pair<int, int> pii;
typedef pair<long, long> pll;
typedef vector<pii> vpii;

#define REP(i, x, y) for (int i=x; i<y; i++)
#define F first
#define S second
#define PB push_back
#define PRES((c, x)) ((c).find(x) != (c).end())

**from this**
for (int i=0; i<n; i++) {
    for (int j=i; j<n; j++)
        print(arr, i, j)
}
**to this**
REP(i, 0, n)
    REP(i, 0, n)
        print(arr, i, j)
```

## IO Manipulation
- Boolean
- value

``` c++
#include <iostream>
using namespace std;
int main() {
    bool a = true;
    cout << a << "\n";
    cout << std::boolalpha;
    cout << a << "\n";
    cout << std::noboolalpha;
    cout << a << "\n";
}
```


