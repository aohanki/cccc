#include <stdio.h>

// 二分查找函数
int binarySearch(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2 ;
        
        // 检查中间元素是否是目标元素
        if (arr[mid] == target) {
            return mid;
        }
        
        // 如果目标元素大于中间元素，忽略左半部分
        if (arr[mid] < target) {
            left = mid + 1;
        }
        // 如果目标元素小于中间元素，忽略右半部分
        else {
            right = mid - 1;
        }
    }
    
    // 如果找不到目标元素，返回 -1
    return -1;
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;
    
    printf("请输入要查找的数字: ");
    scanf("%d", &target);
    
    int result = binarySearch(arr, size, target);

    if (result != -1) {
        printf("数字 %d 在索引 %d 处\n", target, result);
    } else {
        printf("数字 %d 不在列表中\n", target);
    }
    
    return 0;
}
