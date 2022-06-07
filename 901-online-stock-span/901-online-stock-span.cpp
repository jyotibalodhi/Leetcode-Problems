class StockSpanner {
public:
     
    const int M = 1e5 + 7;
	vector<int> nge;
	stack<int> st;

	StockSpanner() {
		nge.resize(M, 1);
	}

	int next(int price) {
		int ans = 1;
		while (!st.empty() && st.top() <= price) {
			ans += nge[st.top()];
			st.pop();
		}
		nge[price] = ans;
        st.push(price);
		return nge[price] ;
	}
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */