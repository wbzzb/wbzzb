#include <iostream>
//#include <vector>
#include <iomanip>
using namespace std;

int main()
{
    //用户输入具体的m行，每行有具体的n个温度 
	int m, n;
    cin >> m >> n;
   
    
   // 这样定义二维数据对吗？？？>>中间要有空格，为  > >   
   //可以如下定义
  // vector<vector<int> > arr(m, vector<int>(n));
  
  
   //定义二维数组 
    int arr[m][n]; 
   
    int sum1 = 0;
    int sum2 = 0;
    int max = -1000;
    int min = 1000;
    double discuss = 0;
    
    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
           //接收输入的m行，每行的N个温度，存入二维数组 
		    cin >> arr[i][j];
           //统计所有的温度之和，放在变量sum1中 
		   sum1 += arr[i][j];
           
           
		   //统计高于30度的数量，放在sum2变量中 
            if (arr[i][j] > 30) 
            {
                sum2++;
            }
            
            
            //每输入一个温度，和前一个max比较，大于max就替换原来的max值 
            if (arr[i][j] > max) 
            {
                max = arr[i][j];
            }
            
            
            //每输入一个温度，和前一个min比较，小于min就替换原来的min值 
            if (arr[i][j] < min) 
            {
                min = arr[i][j];
            }
        }
    }
    
    // 统计平均温度 
    discuss = static_cast<double>(sum1) / (m * n);
    
    cout << fixed << setprecision(2);
    cout << "平均温度: " << discuss << endl;
    
     //行是外循环，每一行为内循环，确定max的行和列 
	cout << "最高温度: " << max << " 位置: ";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++) 
        {
            if (arr[i][j] == max)
            {
                cout << "(" << i << ", " << j << ") ";
            }
        }
    }
    cout << endl;
   
   
   //行是外循环，每一行为内循环，确定min的行和列  
   cout << "最低温度: " << min << " 位置: ";
    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            if (arr[i][j] == min) 
            {
                cout << "(" << i << ", " << j << ") ";
            }
        }
    }
    cout << endl;
    
   cout << "高温区域数量: " << sum2 << endl;
    
    return 0;
}
