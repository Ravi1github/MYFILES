class Employee:
    def __init__(self, name, salary):
        self.name = name
        self.salary = salary
        
    def calculate_da(self, percentage):
        return self.salary * percentage / 100
    
    def calculate_hra(self, percentage):
        return self.salary * percentage / 100
    
    def display_details(self):
        print(f"Name: {self.name}")
        print(f"Salary: {self.salary:.2f}")
        
class DetailedEmployee(Employee):
    def __init__(self, name, salary, da_percentage, hra_percentage):
        super().__init__(name, salary)
        self.da_percentage = da_percentage
        self.hra_percentage = hra_percentage
        
    def display_details(self):
        super().display_details()
        da = self.calculate_da(self.da_percentage)
        hra = self.calculate_hra(self.hra_percentage)
        print(f"DA: {da:.2f}")
        print(f"HRA: {hra:.2f}")
        print("="*30)

employees = []
for i in range(1, 11):
    name = input(f"Enter name of Employee {i}: ")
    salary = float(input(f"Enter salary of Employee {i}: "))
    da_percentage = float(input(f"Enter DA percentage of Employee {i}: "))
    hra_percentage = float(input(f"Enter HRA percentage of Employee {i}: "))
    employee = DetailedEmployee(name, salary, da_percentage, hra_percentage)
    employees.append(employee)

for employee in employees:
    employee.display_details()
