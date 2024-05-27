impl Solution {
    pub fn generate(num_rows: i32) -> Vec<Vec<i32>> {
        let mut triangle = Vec::new();
        if num_rows == 0 {
            return triangle;
        }

        triangle.push(vec![1]);

        for _ in 1..num_rows {
            let prev_row = triangle.last().unwrap();
            let mut new_row = vec![1];

            for j in 1..prev_row.len() {
                new_row.push(prev_row[j-1] + prev_row[j]);
            }

            new_row.push(1);
            triangle.push(new_row);
        }

        triangle
    }
}
