#include <iostream>
#include <vector>
 
using namespace std;
 
vector<int> ShellSort(vector<int> result){
    int n = result.size();

    int m = 0;
    //n = 7;第1次遍历n>>1:先以3为步长排序;第二次遍历n>>1:然后以1为步长排序.
    for (int gap = n >> 1; gap > 0; gap >>= 1){
	//1.打印
	m++;
	cout << "第" << m << "趟排序:" << endl;;
	cout << "gap = " << gap << endl;
	//在以3为步长加1,再与减3的下标比较,直到i < n不符合而退出.
	for (int i = gap; i < n; i++){
	    cout << "i = " << i << endl;
	    int temp = result[i];
	    int j = i - gap;//第1次为减3的 步长.
	    
	    /*while (j >= 0 && result[j] > temp){
		cout << "j = " << j << endl;
		result[j + gap] = result[j];
		j -= gap;
	     }
	    */

	    for(j;j >= 0 && result[j] > temp; j -= gap)
		result[j+gap] = result[j];

	    //2.打印
	    cout << "排序中:";
	    for (int s = 0; s < result.size(); s++){
		cout << result[s] << " ";
	    }
	    cout << endl;
	    
	    result[j + gap] = temp;
	}
	//3.打印
	cout << "排序结果:";
	for (int s = 0; s < result.size(); s++){
	    cout << result[s] << " ";
	}
	cout << endl << endl;
    }
    return result;
}
 
int main(){
    int arr[] = { 6, 4, 8, 9, 2, 3, 1 };
    vector<int> test(arr, arr + sizeof(arr) / sizeof(arr[0]));

    ShellSort(test);

}
