#include <iostream>
#include <vector>
using namespace std;

class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node(int val) {
        this->val = val;
        this->left = nullptr;
        this->right = nullptr;
    }
};

void insert_heap(vector<int>& v, int x) {
    v.push_back(x);
    int cur_idx = v.size() - 1;

    while (cur_idx != 0) {
        int parent_idx = (cur_idx - 1) / 2;
        if (v[parent_idx] < v[cur_idx])
            swap(v[parent_idx], v[cur_idx]);
        else
            break;

        cur_idx = parent_idx;
    }
}

void delete_heap(vector<int>& v) {
    if (v.empty())
        return;

    v[0] = v[v.size() - 1];
    v.pop_back();
    int cur = 0;

    while (true) {
        int left_idx = cur * 2 + 1;
        int right_idx = cur * 2 + 2;
        int last_idx = v.size() - 1;
        int largest_idx = cur;

        if (left_idx <= last_idx && v[left_idx] > v[largest_idx])
            largest_idx = left_idx;

        if (right_idx <= last_idx && v[right_idx] > v[largest_idx])
            largest_idx = right_idx;

        if (largest_idx != cur) {
            swap(v[cur], v[largest_idx]);
            cur = largest_idx;
        } else {
            break;
        }
    }
}

void print_heap(vector<int> v) {
    for (int val : v) {
        cout << val << " ";
    }
    cout << endl;
}

int main() {
    Node* root = nullptr;
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        insert_heap(v, x);
    }
    print_heap(v);

    int Q;
    cin >> Q;

    for (int i = 0; i < Q; i++) {
        int type;
        cin >> type;

        if (type == 1) {
            int val;
            cin >> val;
            insert_heap(v, val);
        } else if (type == 2) {
            int maxVal = v[0];
            delete_heap(v);
            cout << maxVal << endl;
        }
    }

    return 0;
}
