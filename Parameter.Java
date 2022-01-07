class Employee
{
String ename,Add;
int YOJ;
Employee (String name,int year,String add)
{
    ename=name;
    YOJ=year;
    Add=add;
}
    public void name()
    {
        System.out.println("\nEnter the Employee Name:\n"+ename);
    }
    public void year()
    {
        System.out.println("\nEnter the Year of Joining Date:\n"+YOJ);
    }
    public void address()
    {
        System.out.println("\nEnter the Address of the Employee\n"+Add);
    }
public static void main(String[] args)
{
  Employee e=new Employee("Robert",1994,"64C-WallsStreet");
    e.name();
    e.year();
    e.address();
  Employee e1=new Employee("Sam",2000,"68D-WallsStreet");
    e1.name();
    e1.year();
    e1.address();
  Employee e2=new Employee("John",1999,"26B-WallsStreet");
    e2.name();
    e2.year();
    e2.address();
}
}
