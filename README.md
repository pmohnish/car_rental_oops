CAR RENTAL SYSTEM PROJECT

The Car Rental System is a program implemented in C++ that simulates a simple car rental service. The system consists of three main classes: Car, Customer, and Rental, encapsulating the properties and behaviors of cars, customers, and rental transactions, respectively. The project also includes a CarRentalSystem class that manages the overall system operations.

Classes:
Car Class: Represents a car with attributes such as car ID, brand, model, base price per day, and availability status.
Provides methods to calculate rental prices, check availability, and handle renting/returning.

Customer Class:
Represents a customer with attributes like customer ID and name.
Stores basic information about customers.

Rental Class:
Represents a rental transaction, linking a specific car to a customer for a certain number of days.
Keeps track of the rented car, the customer involved, and the duration of the rental.

CarRentalSystem Class:
Manages the overall system operations, including adding cars and customers, renting cars, returning cars, and displaying a user menu.
Utilizes vectors to store instances of cars, customers, and rentals.

Features:
Car Management:Cars can be added to the system with details like car ID, brand, model, and base price per day. Availability status is tracked, and cars can be rented or returned.
Customer Management: Customers can be added to the system with unique customer IDs and names.
Rental Transactions: Cars can be rented by customers for a specified number of days, and the system calculates the total rental price.Rental transactions are recorded, and cars are marked as unavailable during the rental period.

User Interface: The system provides a simple console-based menu for users to interact with, allowing them to rent or return cars and exit the program.
Data Storage: Vectors are used to store instances of cars, customers, and rentals.


Usage:
The main function initializes a CarRentalSystem and adds a few cars to the system.
Users interact with the system through the console menu, where they can rent or return cars and exit the program.
The program performs basic checks, such as ensuring a car is available before renting and handling invalid inputs.

OOP Concepts Used:

Encapsulation: Each class encapsulates data (attributes) and methods that operate on that data. For example, the Car class encapsulates details about a car and methods for renting and returning.

Polymorphism: Polymorphism is used indirectly through function overloading, where methods like calculatePrice have the same name but different parameter lists.

Abstraction:
The project abstracts complex real-world entities (cars, customers, rentals) into simplified, manageable objects with well-defined behaviors.
