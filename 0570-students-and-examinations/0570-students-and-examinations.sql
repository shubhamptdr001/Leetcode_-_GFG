# Write your MySQL query statement below
select  s.student_id, s.student_name, sb.subject_name, count(e.subject_name) as attended_exams
from Students s
cross join Subjects sb
left join Examinations e
on s.student_id = e.student_id 
and sb.subject_name = e.subject_name
group by s.student_id, s.student_name, sb.subject_name
order by s.student_id, s.student_name;

-- note : when uses alias function use -> group by
-- if shows order then ->order by
-- when both one table data is related to another table data then ->cross join

-- Synced seamlessly with LeetHub Pro
-- Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
-- Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna