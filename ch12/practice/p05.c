/*---以对话形式移动汽车的程序---*/

#include <stdio.h>
#include <math.h>

#define sqr(n) ((n) * (n))

typedef struct {
    double x;   //x坐标
    double y;   //y坐标
} Point;

typedef struct {
    Point pt;   //当前位置
    double fuel;    //剩余燃料
} Car;

double distance_of(Point pa, Point pb) {
    return sqrt(sqr(pa.x - pb.x) + sqr(pa.y - pb.y));
}

void put_info(Car c) {
    printf("当前位置：(%.2f, %.2f)\n", c.pt.x, c.pt.y);
    printf("剩余燃料：%.2f升\n", c.fuel);
}

int move(Car *c, Point dest) {
    double d = distance_of(c->pt, dest);

    if (d > c->fuel) {
        return 0;
    }

    c->pt = dest;
    c->fuel -= d;
    return 1;
}

int main(void) {
    Car mycar = {{0.0, 0.0}, 90.0};

    while (1) {
        int select, choice;
        double x, y;
        Point dest;
        put_info(mycar);        //显示当前位置和剩余燃料。
        printf("开动汽车吗[Yes---1/No---0]:");
        scanf("%d", &select);

        if (select != 1) { break; }

        printf("请选择驾驶方式[输入坐标---1/输入距离---0]：");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("目的地的x坐标：");     scanf("%lf", &dest.x);
            printf("    y坐标：");     scanf("%lf", &dest.y);
        }

        if (choice == 0) {
            printf("目的地的x距离："); scanf("%lf", &x);
            printf("目的地的y距离："); scanf("%lf", &y);
            dest.x = mycar.pt.x + x;
            dest.y = mycar.pt.y + y;
        }

        if (!move(&mycar, dest)) {
            puts("\a燃料不足无法行使。");
        }
    }

    return 0;
}

