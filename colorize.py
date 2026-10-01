from pathlib import Path
import re

path = Path("/home/manzini/ProjectFiles/C++Projects/CityGame/main.cpp")
source = path.read_text()

# Color the other implemented quiz welcomes blue.
for continent in ("Asian", "African", "North American"):
    old = f'std::cout << "Welcome to the {continent} Continent Quiz\\n";'
    new = (
        f'std::cout << BLUE << "Welcome to the {continent} Continent Quiz"'
        ' << RESET << "\\n";'
    )
    source = source.replace(old, new)

# Color correct and incorrect feedback consistently.
source = source.replace(
    'std::cout << "Correct!\\n";',
    'std::cout << GREEN << "Correct!" << RESET << "\\n";',
)
source = source.replace(
    'std::cout << BLUE << "Correct!" << RESET << "\\n";',
    'std::cout << GREEN << "Correct!" << RESET << "\\n";',
)
source = re.sub(
    r'std::cout << "Incorrect(!?)\\n";',
    r'std::cout << RED << "Incorrect\\1" << RESET << "\\n";',
    source,
)

# Color plain invalid-input messages yellow.
source = re.sub(
    r'std::cerr << "Invalid input(!?)\\n";',
    r'std::cerr << YELLOW << "Invalid input\\1" << RESET << "\\n";',
    source,
)

# Highlight plain correct-answer text green.
source = re.sub(
    r'std::cout << "The correct answer is (.+?)\\n";',
    r'std::cout << "The correct answer is " << GREEN << "\\1"'
    r' << RESET << "\\n";',
    source,
)

path.write_text(source)
