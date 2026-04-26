use std::io;

fn main() {
    loop {
        let mut input = String::new();
        io::stdin().read_line(&mut input).expect("Failed to read line");
        let input = input.trim();

        match input {
            "animal" => {
                println!("Panthera tigris");
            }
            "flower" => {
                println!("Forsythia koreana");
            }
            "tree" => {
                println!("Pinus densiflora");
            }
            "end" => {
                break;
            }
            _ => {}
        }
    }
}
