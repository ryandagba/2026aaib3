///week01-2.cpp SOIT106_ADVANCE_001
///C++版本
#include <iostream>///使用IO 串流 的外掛
using namespace std; ///使用std命名空間
int main()
{
	int N;
	cin >> N;/// console input 到右邊的 N
	int b = N, ans = 0;
	while (N>0){
		ans = ans*10 + N%10;
		N = N / 10;
	}
	/// console output 依序送出去
	///cout << b << ans << b+ans;///錯， 少了 += 跳行
	cout << b << "+" << ans << "=" << b+ans << "\n";/// 正確
	cout << b << "+" << ans << "=" << b+ans << endl;/// 正確
	print("%d%d%d\n", b, ans, ans+b);
	}
