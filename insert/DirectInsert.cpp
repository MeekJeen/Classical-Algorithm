#include <iostream>
#include <vector>

using namespace std;

vector<int> insertSort(vector<int> result){
    int m = 0;
    // 第1个数肯定是有序的，从第2个数开始遍历，依次插入有序序列
    for(int i = 1; i < result.size(); i++){
	// 取出第i个数，和前i-1个数比较后，插入合适位置
	int temp = result[i];
	// 因为前i-1个数都是从小到大的有序序列，所以只要当前比较的数(result[j])比temp大，就把这个数后移一位
	int j = i - 1;

	//1.打印
	m++;
	cout << "第" << m << "趟排序:" << endl;;

	for(; j >= 0 && result[j] > temp; j--){
	    result[j + 1] = result[j];
	    //2.打印
	    cout << "排序中:";
	    for (int s = 0; s < result.size(); s++){
		cout << result[s] << " ";
	    }
	    cout << endl;
	    //cout << "i1 = " << i << endl;
	    //cout << "j1 = " << j << endl;
	}
	//cout << "j = " << j << endl;
	//不符合result[j] > temp,跳出循环;即j+1才是temp的位置,即result[j + 1] = temp;
	result[j+1] = temp;
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
    int arr[] = {6, 2, 5, 32, 1, 3, 80, 11};
    vector<int> count(arr, arr + sizeof(arr) / sizeof(arr[0]));
    cout << "排序前:" << endl;
    for(int i = 0; i < count.size(); i++)
	cout << count[i] << " ";
    cout << endl << endl;;

    vector<int> result;
    result = insertSort(count);
}
