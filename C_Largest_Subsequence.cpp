/**********************************let's begin**********************************/
#include "bits/stdc++.h"
using namespace std;
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define int long long
#define endl "\n"
#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int, int>
#define vpii vector<pii>
#define all(x) (x).begin(), (x).end()
#define sortall(x) sort(all(x))
#define debug(x) cout << #x << " : " << x << endl
#define fastIO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
const int MOD = 1e9 + 7;
const int INF = 1e18;
const int N = 1e5 + 5;
/********************************** SOLUTION **********************************/
string lexicographicalLargestSubsequence(string s) {
    unordered_map<char, int> lastOccurrence;
    for (int i = 0; i < s.size(); i++) {
        lastOccurrence[s[i]] = i;  // Store the last occurrence of each character
    }

    stack<char> st;
    set<char> seen;

    for (int i = 0; i < s.size(); i++) {
        char ch = s[i];
        if (seen.count(ch)) continue;  // Avoid duplicates

        while (!st.empty() && st.top() < ch && lastOccurrence[st.top()] > i) {
            seen.erase(st.top());  // Remove smaller characters that appear later
            st.pop();
        }

        st.push(ch);
        seen.insert(ch);
    }

    string result;
    while (!st.empty()) {
        result += st.top();
        st.pop();
    }
    reverse(result.begin(), result.end());  // Reverse to maintain original order

    return result;
}
void solve() {
    int n;cin>>n;
    string s;cin>>s;
    string t=s;
    sort(t.begin(),t.end());

    string lexo="";
    for(int i=0;i<n;i++){
        if(s[i]!=t[i]){
            lexo+= s[i];
        }
    }
    string check = lexicographicalLargestSubsequence(s);
    cout<<check<<endl;
    if(lexo!=check && lexo.size()>1){
        cout<<-1<<endl;
    }else{
        cout<<lexo.size()-1<<endl;
    }


}
/********************************** MAIN FUNCTION *****************************/
int32_t main() {
    fastIO;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
// /**********************************let's begin**********************************/
// #include "bits/stdc++.h"
// using namespace std;
// #define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
// #define int long long
// #define endl "\n"
// #define vi vector<int>
// #define vvi vector<vi>
// #define pii pair<int, int>
// #define vpii vector<pii>
// #define all(x) (x).begin(), (x).end()
// #define sortall(x) sort(all(x))
// #define debug(x) cout << #x << " : " << x << endl
// #define fastIO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
// const int MOD = 1e9 + 7;
// const int INF = 1e18;
// const int N = 1e5 + 5;
// /********************************** SOLUTION **********************************/
// void solve() {
//     int n;
//     cin >> n;
//     string s;
//     cin >> s;

//     char mini = 'z', maxi = 'a';
//     if (is_sorted(s.begin(), s.end())) {
//         cout << 0 << endl;
//         return;
//     }

//     for (int i = 0; i < n; i++) {
//         maxi = max(maxi, s[i]);
//     }

//     int idx1 = -1, idx2 = -1;
//     bool is = false;
    
//     for (int i = 0; i < n; i++) {
//         if (s[i] == maxi) {
//             idx1 = i;
//             is = true;
//         }
//         if (s[i] <= mini && is) {
//             idx2 = i;
//             mini = min(mini, s[i]);
//         }
//     }

//     if (idx1 > idx2) swap(idx1, idx2);

//     string subss = s.substr(idx1, idx2 - idx1 + 1);
//     string check = subss;
//     sort(subss.begin(), subss.end());

//     string t = s;
//     string sss = subss;
//     sort(sss.rbegin(), sss.rend());

//     for (int i = idx1; i <= idx2; i++) {
//         t[i] = subss[i - idx1];
//     }

//     if (!is_sorted(t.begin(), t.end())) {
//         cout << -1 << endl;
//         return;
//     }

//     int cnt = 0;
//     set<int> nt;
//     int j = 0;

//     set<int> have;

//     for (int i = 0; i < check.size(); i++) {
//         if(have.find(sss[i])!=have.end())j++;
//         if (j < sss.size() && check[i] != sss[j]) {
//             have.insert(check[i]);
//             nt.insert(i);
//         } else {
//             cnt++;
//             j++;
//         }
//     }

//     bool on_place = true;  // Initialize as true
//     for (int i = 0; i < subss.size(); i++) {
//         if (nt.find(i) != nt.end() && subss[i] != check[i]) {
//             on_place = false;
//             break;
//         }
//     }

//     if (!on_place) {
//         cout << -1 << endl;
//         return;
//     }

//     cout << cnt - 1 << endl;
// }

// /********************************** MAIN FUNCTION *****************************/
// int32_t main() {
//     fastIO;
//     int t;
//     cin >> t;
//     while (t--) {
//         solve();
//     }
//     return 0;
// }