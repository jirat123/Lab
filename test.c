#include <stdio.h>

// ฟังก์ชั่นนับจำนวนที่ซ้ำกันและแสดงผลลัพธ์
void countAndPrint(int arr[], int n) {
    // เรียงลำดับอาเรย์จากมากไปน้อย
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] < arr[j]) {
                // สลับค่า
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // ตัวแปรสำหรับเก็บจำนวนที่ซ้ำกัน
    int count;

    // วนลูปผ่านอาเรย์
    for (int i = 0; i < n; i++) {
        // ตรวจสอบว่าอีลีเมนต์นี้ถูกนับแล้วหรือยัง
        if (arr[i] != -1) {
            // นับจำนวนที่ซ้ำกันและแสดงผล
            count = 1;
            for (int j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                    arr[j] = -1;  // ทำเครื่องหมายว่าถูกนับแล้ว
                }
            }
            // แสดงผลลัพธ์
            printf("%d occurs %d times at position", arr[i], count);
            for (int k = 0; k < n; k++) {
                if (arr[k] == arr[i]) {
                    printf(" %d", k + 1);
                }
            }
            printf("\n");
        }
    }
}

int main() {
    // ประกาศขนาดของอาเรย์และการรับข้อมูลจากผู้ใช้
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    // ประกาศและรับอาเรย์จากผู้ใช้
    int arr[n];
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // เรียกใช้ฟังก์ชั่นนับและแสดงผลลัพธ์
    countAndPrint(arr, n);
    
    return 0;
}
