# Write your MySQL query statement below
select *
from patients
where conditions like 'DIAB1%'
or conditions like '% DIAB1%'
order by patient_id;


-- Synced seamlessly with LeetHub Pro
-- Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
-- Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna