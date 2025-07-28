#include <stdio.h>

void countCall(){
    int counter = 0;
    counter++;
    printf("Call Funtion Counter = %d\n", counter);
}

int main() {
    printf("starting funtion calls...\n");
    countCall();
    printf("After first calls:\n");
    countCall();
    return 0;
}
// ผลลัพธ์ที่ได้ต่างกันเพราะVariableต่างกัน
// ต่างfter first callของnon staticมีค่าน้อยกว่าค่าของstatic
// ต่างfter first callของnon staticและ staticต่างกัน