/*
// Definition for Employee.
class Employee {
public:
    int id;
    int importance;
    vector<int> subordinates;
};
*/

class Solution {
    void getEmp(vector<Employee*>employees,int id,int& imp)
    {
        int i;
        for( i=0;i<employees.size();i++)
            if(employees[i]->id==id)
                break;
        if(i<employees.size())
        {
            imp+=employees[i]->importance;
             for(auto a:employees[i]->subordinates)
                getEmp(employees,a,imp);
        }
    }        
public:
    int getImportance(vector<Employee*> employees, int id) {
        int imp=0;
        getEmp(employees,id,imp);
        return imp;
    }
};