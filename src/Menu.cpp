
#include "Menu.h"

void Menu::add_entry(Entry entry) {
    m_entries.push_back(entry);
}

void Menu::perform_selection(char selection) {
    for (auto e = m_entries.begin(); e != m_entries.end(); e++) {
        if (e->matches(selection)) {
            e->perform_action();
            return;
        }
    }
}