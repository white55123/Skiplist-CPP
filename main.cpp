#include <iostream>
#include "skiplist.h"
#define FILE_PATH "./store/dumpFile"

int main() {
    SkipList<int, std::string> skipList(6);
    skipList.load_file();

    int choice, key;
    std::string value;
    int start_key, end_key;

    while (true) {
        std::cout << "\n1. Insert element" << std::endl;
        std::cout << "2. Delete element" << std::endl;
        std::cout << "3. Search element" << std::endl;
        std::cout << "4. Display list" << std::endl;
        std::cout << "5. Range search elements" << std::endl;
        std::cout << "6. Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Enter key and value to insert: ";
                std::cin >> key >> value;
                skipList.insert_element(key, value);
                skipList.dump_file();
                break;
            case 2:
                std::cout << "Enter key to delete: ";
                std::cin >> key;
                skipList.delete_element(key);
                skipList.dump_file();
                break;
            case 3:
                std::cout << "Enter key to search: ";
                std::cin >> key;
                if (!skipList.search_element(key)) {
                    std::cout << "Element not found" << std::endl;
                }
                break;
            case 4:
                skipList.display_list();
                break;
            case 5:
                std::cout << "Enter start key and end key for range search: ";
                std::cin >> start_key >> end_key;
                skipList.find_range(start_key, end_key);
                break;
            case 6:
                std::cout << "Exiting..." << std::endl;
                return 0;
            default:
                std::cout << "Invalid choice, please try again!" << std::endl;
        }
    }
    return 0;
}