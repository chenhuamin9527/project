public class Main {
    public static void main(String []args)
    {
        // TODO: ��Person���ӹ��췽��:
        Person ming = new Person("С��", 12);
        System.out.println(ming.getName());
        System.out.println(ming.getAge());
    }
}
class Person {
    private String name;
    private int age;

    public Person(String name, int age)
    {
        this.name = name;
        this.age = age;
    }

    public Person(String name)
    {
        this(name, 18);
    }

    public Person()
    {
        this("uname");
    }

    public String getName() {
        return name;
    }

    public int getAge() {
        return age;
    }
}
