#include <iostream>

using namespace std;


struct Employees

{
    int ID;
    string name;
    string title;
    double salary;
};

Employees emp[100];
int employee=0;

void AddNewEmployees()

{
    cout<<"Enter employee's ID : ";
    cin>>emp[employee].ID;
    cin.ignore();
    cout<<"Enter employee's name : ";
    getline(cin, emp[employee].name);
    cout<<"Enter employee's job title : ";
    getline(cin, emp[employee].title);
    cout<<"Enter employee's salary : $";
    cin >> emp[employee].salary;
    cin.ignore();
    employee++;
}

void ShowAllEmployees()

{
    cout<<"Employee list : "<<endl;
    for(int i=0;i<employee;i++)
    {
        cout<<"ID : "<<emp[i].ID<<"\nName : "<<emp[i].name<<"\nJob title : "<<emp[i].title<<"\nSalary : "<<emp[i].salary<<endl;
    }

}

void CalculatePayroll()

{
    double salary;
    for(int i=0;i<employee;i++)
    {
        salary+=emp[i].salary;
    }
    cout<<"Total monthly payroll = $"<<salary<<endl;
}

void GeneratePayslip()
{
     int id;
     cout<<"Enter id : ";
     cin>>id;
     for(int i=0;i<employee;i++)
     {
        if(id==emp[i].ID)
     {
        cout<<"Payslip for employee "<<id<<" :"<<endl;
        cout<<"Name : "<<emp[i].name<<endl;
        cout<<"Job title : "<<emp[i].title<<endl;
        cout<<"Salary : $"<<emp[i].salary<<endl;
     }
     else {
        cout<<"Error!ID is not found. Please enter valid ID"<<endl;
     }
}
}

void PayrollReport()
{
    if(employee==0 || employee<0)
    {
        cout<<"Error: no employees to generate report!"<<endl;
    }else
    {
        CalculatePayroll();
    }
}

int main()

{
    char num;
    do{
    cout<<"Employee Management System"<<endl;
    cout<<"1.Add new employee"<<endl;
    cout<<"2.Show all employees"<<endl;
    cout<<"3.Calculate payroll"<<endl;
    cout<<"4.Generate payslip"<<endl;
    cout<<"5.Generate payroll report"<<endl;
    cout<<"6.Exit";
    cout<<"\n"<<"Select : ";
    cin>>num;

    switch(num)
    {
    case '1':
        AddNewEmployees();
        break;
    case '2':
        ShowAllEmployees();
        break;
    case '3':
        CalculatePayroll();
        break;
    case '4':
        GeneratePayslip();
        break;
    case '5':
        PayrollReport();
        break;
    case '6':
        cout<<"Exiting...";
        return 0;
        break;
    default:
        cout<<"Invalid!"<<endl;
        break;
    }
}
    while(num!=6);

    return 0;
}

