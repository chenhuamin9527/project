package lab1;

import java.util.Scanner;

public class Lab1_4 {
    public static void hanoi(int n, String a, String b,String c) {
        if (n == 1) {
            // ֻ��һ��Բ��ʱֱ�Ӵ�Aʯ���ƶ���Cʯ��
            move(n, a, c);
        } else {
            // ��ǰn-1��Բ�̴�ʯ��A�ƶ���ʯ��B
            hanoi(n - 1, a, c, b);
            // ����n��Բ�̴�ʯ��A�ƶ���ʯ��C
            move(n, a, c);
            // ��ǰn-1��Բ�̴�ʯ��B�ƶ���ʯ��C
            hanoi(n - 1, b, a, c);
        }
    }

    public static void move(int n, String i, String j) {
        System.out.println("��" + n + "��Բ�̣�" + "��" + i + "�ƶ���" + j);
    }

    public static void main(String[] args) {
    	Scanner input = new Scanner(System.in);
    	int n = input.nextInt();
    	hanoi(n,"A","B","C");
    }
}