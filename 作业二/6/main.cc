#include <stdio.h>

int main() {
    int start, end;
    scanf("%d %d", &start, &end);
    
    // 拆分出发时间的小时和分钟
    int hs = start / 100;
    int ms = start % 100;
    // 拆分到达时间的小时和分钟
    int he = end / 100;
    int me = end % 100;
    
    // 计算出发和到达时间的总分钟数
    int start_total = hs * 60 + ms;
    int end_total = he * 60 + me;
    
    // 计算时间差（总分钟数）
    int diff = end_total - start_total;
    
    // 转换为小时和分钟
    int h = diff / 60;
    int m = diff % 60;
    
    // 格式化输出，确保小时和分钟为两位数字
    printf("%02d:%02d\n", h, m);
    
    return 0;
}
