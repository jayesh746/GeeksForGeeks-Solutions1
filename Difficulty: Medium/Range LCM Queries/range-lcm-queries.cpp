class Solution {
public:

long long getLCM(long long a, long long b) {
    return (a / __gcd(a, b)) * b;
}

void BuildSegmentTreeRangeLCMQuery(int node, int low, int high, vector<long long> &seg, vector<int> &arr) {
    // Base Case
    if(low == high) {
        seg[node] = 1LL * arr[low];
        return;
    }

    int mid = low + ((high - low) / 2);

    // Left and right calls
    BuildSegmentTreeRangeLCMQuery((2 * node) + 1, low, mid, seg, arr);
    BuildSegmentTreeRangeLCMQuery((2 * node) + 2, mid+1, high, seg, arr);

    seg[node] = getLCM(seg[(2 * node) + 1], seg[(2 * node) + 2]);

    return;
}

void UpdateSegmentTreeRangeLCMQuery(int node, int low, int high, int &idx, vector<long long> &seg, vector<int> &arr) {
    // Base Case
    if(low == high) {
        seg[node] = 1LL * arr[idx];
        return;
    }

    int mid = low + ((high - low) / 2);

    // Where to update
    // Left call
    if(idx <= mid) {
        UpdateSegmentTreeRangeLCMQuery((2 * node) + 1, low, mid, idx, seg, arr);
    }
    // Right call
    else {
        UpdateSegmentTreeRangeLCMQuery((2 * node) + 2, mid+1, high, idx, seg, arr);
    }

    seg[node] = getLCM(seg[(2 * node) + 1], seg[(2 * node) + 2]);

    return;
}

long long GetAnsSegmentTreeRangeLCMQuery(int node, int low, int high, int &l, int &r, vector<long long> &seg) {
    // Base Case
    if(l <= low && high <= r) {
        return seg[node];
    }
    if(r < low || l > high) {
        // getLCM(1, x) = x
        return 1;
    }

    int mid = low + ((high - low) / 2);

    // Left and right calls
    long long left = GetAnsSegmentTreeRangeLCMQuery((2 * node) + 1, low, mid, l, r, seg);
    long long right = GetAnsSegmentTreeRangeLCMQuery((2 * node) + 2, mid+1, high, l, r, seg);

    return getLCM(left, right);
}

vector<long long> RangeLCMQuery(vector<int> &arr, vector<vector<int>> &queries) {
    int size = arr.size();
    int qSize = queries.size();
    vector<long long> seg(4 * size);
    vector<long long> ans;

    // Building segment tree
    BuildSegmentTreeRangeLCMQuery(0, 0, size-1, seg, arr);

    // Going for queries
    for(int i = 0; i < qSize; i++) {
        // Update
        if(queries[i][0] == 1) {
            int idx = queries[i][1];
            arr[idx] = queries[i][2];

            UpdateSegmentTreeRangeLCMQuery(0, 0, size-1, idx, seg, arr);
        }
        // getLCM of range
        else {
            int l = queries[i][1];
            int r = queries[i][2];

            ans.push_back( GetAnsSegmentTreeRangeLCMQuery(0, 0, size-1, l, r, seg) );
        }
    }

    return ans;
}

};