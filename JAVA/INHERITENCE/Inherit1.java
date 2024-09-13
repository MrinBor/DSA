import java.util.*;
import java.util.Scanner;


class Manager
{
    private int dataId;
    private int domainId;
    private String name;
    private int empCmdId;

    Manager()
    {
        System.out.println("\nManager class constructor is called\n");
    }

    public void setId(int dataId)
    {
        this.dataId = dataId;
    }


    public void setdomainId(int domainId)
    {
        this.domainId = domainId;
    }


    public void setName(String name)
    {
        this.name = name;
    }


    public void setCmdId(int empCmdId)
    {
        this.empCmdId = empCmdId;
    }

    public int getId()
    {
        return dataId;
    }

    public int getDomainId()
    {
        return domainId;
    }








};

class Employee extends Manager
{
    int employeeId;
    int empSpId;

    Employee(int dataId,int domainId,String name,int empCmdId,int employeeId,int empSpId)
    {
        System.out.println("\nEmployee class is called successfully\n");
        this.setId(dataId);
        this.setdomainId(domainId);
        this.setName(name);
        this.setCmdId(empCmdId);
        this.employeeId = employeeId;
        this.empSpId = empSpId;
    }


    public void Display() 
    {
        System.out.println("DATA_ID   DOMAIN_ID  NAME EMP_CMD_ID  EMPLOYEE_ID  EMP_SP_ID\n");
        System.out.println(this.getDomainId()+" ");
        System.out.println(this.getId());

    }


}


public class Inherit1 
{
    public static void main(String args[])
    {
        Employee E = new Employee(12, 1234, "MRINMOY", 124, 1, 1);
        E.Display();
    }
}
