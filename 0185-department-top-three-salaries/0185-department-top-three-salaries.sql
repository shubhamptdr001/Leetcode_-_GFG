select Department, Employee,Salary 
from (
    select d.name as Department,e.name as Employee, e.salary as Salary,
    dense_rank() over(partition by d.name order by e.salary desc) as ranks
    from employee e
    left join department d
    on e.departmentId = d.id
) as temp
where ranks <=3;


-- Synced seamlessly with LeetHub Pro
-- Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
-- Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna