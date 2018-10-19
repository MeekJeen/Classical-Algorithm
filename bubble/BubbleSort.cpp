#include <iostream>
#include <vector>

using namespace std;

vector<int> bubbleSort(vector<int> list){
    vector<int> result;    
    if (list.empty()){
	return result;
    }

    result = list;
    int temp;
    // 要遍历的次数
    for (int i = 0; i < result.size() - 1; ++i){
	cout << "第" << i + 1 << "趟排序:" << endl;;
	// 从后向前依次的比较相邻两个数的大小
	bool Changed = false;
	for (int j = 0; j < result.size() - 1; j++){
	    // 如果后面的元素小，则交换它们的位置
	    if (result[j + 1] < result[j]){
		temp = result[j + 1];
		result[j + 1] = result[j];
		result[j] = temp;
		Changed = true;
	    }
	    cout << "排序中:";
	    for (int s = 0; s < result.size(); s++){
		cout << result[s] << " ";
	    }
	    cout << endl;
	}
	// 如果标志为false，说明本轮遍历没有交换，已经是有序数列，可以结束排序
	if(Changed == false)
	    break;
	cout << "排序结果:";
	for (int s = 0; s < result.size(); s++){
	    cout << result[s] << " ";
	}	
	cout << endl;	
    }
    return result;
}

int main(){
    int arr[] = { 6, 4, 8, 1, 2, 3, 9 };
    //初始化arr数组
    vector<int> test(arr, arr + sizeof(arr) / sizeof(arr[0]));
    cout << "排序前" << endl;
    for (int i = 0; i < test.size(); i++){
	cout << test[i] << " ";
    }
    cout << endl;
    
    vector<int> result;
    result = bubbleSort(test);
    cout << "排序后" << endl;
    for (int i = 0; i < result.size(); i++){
    	cout << result[i] << " ";
    }
    cout << endl;
}
