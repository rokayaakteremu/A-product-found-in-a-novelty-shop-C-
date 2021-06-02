# A-product-found-in-a-novelty-shop-C-
For this assignment, implement a class called Product that will be used to represent a product that might be found in a novelty shop.

Question:
For this assignment, implement a class called Product that will be used to represent a product that might be found in a novelty shop.
class Product
The Product class definition should be placed at the top of a source code file while the method implementations should be placed after the closing curly brace for main().

Data Members
The Product class contains four private data members.
	an array of characters that holds the product identification code. It should have room for 11 characters PLUS a null terminator.
	an array of characters that holds the product name. It should have room for 45 characters PLUS a null terminator.
	a float (or double) variable that holds the price of the product
	an integer that holds the quantity of the product that is in stock

Constructors
Constructor 1:
The first constructor for the Product class is the default constructor. It takes no arguments. Like all C++ constructors, it does not have a return data type.

It should set the product code and name data members to "null strings". This can be done by copying a null string literal ("") into a character array using strcpy() or by setting the first element of the array to a null character ('\0'). The price and quantity in stock data members should be set to 0.

Constructor 2:
The second constructor for the Product class takes four arguments: an array of constant character (const char []) that represents an initial product identification code, an array of constant character that represents an initial product name, a float (or double) that represents an initial price for the product, and an integer that represents the initial quantity in stock for the product. DO NOT GIVE THESE ARGUMENTS THE SAME NAMES AS THE DATA MEMBERS. Like all C++ constructors, this constructor does not have a return data type.

Call the various "set" methods to set the values for all 4 data members.

Methods
printProduct
This public method displays the contents of an object. It takes no arguments and returns nothing.

It should print the product identification code, name, price, and quantity members on a single line. Use setw() to line the printed values up in columns (a width of 13 for the product identification code, 48 for the name, 6 for the price, and 6 for the quantity will match the sample output). The product identification code and name should be left-justified while the price and quantity should be right-justified. The price should be printed using fixed-point notation with two places after the decimal point.

setProductCode
This public accessor method sets the product identification code for an object.

It takes one argument: an array of constant characters that holds a new product identification code. It returns nothing.

The method should use the strcpy function to copy the new product identification code into the product identification code data member.

setProductName
This public accessor method sets the product name for an object.

It takes one argument: an array of constant characters that holds a new product name. It returns nothing.

The method should use the strcpy function to copy the new product name into the product name data member.

setProductPrice
This public accessor method sets the price for an object.

It takes one argument: a float/double that holds a new price. It returns nothing.

The method should check if the new price is greater than or equal to 0. If it is, it should be used to set the price data member to the new price. Otherwise, it should set the price data member to 0.

setProductQuantity
This public accessor method will set the quantity in stock for an object.

It takes one argument: an integer that holds a new quantity in stock. It returns nothing.

The method should check if the new quantity in stock is greater than or equal to 0. If it is, it should be used to set the quantity in stock data member to the new quantity in stock. Otherwise, it should set the quantity in stock data member to 0.

getProductPrice
This public accessor method returns the price data member. It takes no arguments and returns a float (or double).

getProductQuantity
This public accessor method returns the quantity in stock data member. It takes no arguments and returns an integer.

fillProductOrder
This public method processes an order.

It takes one argument: an integer that represents the quantity of the product that has been ordered. It returns an integer: the quantity of the product that the store is able to ship at this time.

The logic for this method should be as follows:

If the quantity of the product that has been ordered is less than zero, the order is in error. The quantity of the product that the store is able to ship at this time should be zero. DO NOT alter the quantity in stock for the product.

If the quantity of the product that has been ordered is less than or equal to the quantity in stock, the order can be completely filled. The quantity of the product that the store is able to ship at this time should be the same as the quantity of the product that has been ordered, and the quantity of the product that has been ordered should be subtracted from the quantity in stock.

Otherwise, the order cannot be completely filled. The quantity of the product that the store is able to ship at this time should be the quantity in stock, and the quantity in stock should be set to zero.

main()
In main(), create 3 Product objects. They should contain the values:

The first product should be created with the default constructor (i.e. the one that takes no arguments)

The second product should be created with the second constructor. The product code should be "22222222222", product name "Virtual Education Pack", price of $0.99, and quantity in stock of 31.

The third product should be created with the second constructor. The product code should be "33333333333", product name "Dehydrated Water Bed", price of $-12.99, and quantity in stock of -6.

The rest of main() will include using the various methods on the 3 Product objects. Before the code that satisfies each of the bullet points below, make sure to display a title that indicates what is happening to the product. For example, something like "***** The 3 products *****" can be displayed before executing the code for the first bullet point.

For each of the products, call the printProduct method to display the product information. Before each call to printProduct, display a short title such as "Product 1".

For product 1, call the set methods to set the product identification code to "11111111111", product name to "Flowbee Pet Groomer", price to $339.99, and the quantity in stock to 28. Call the printProduct method to display the updated product 1 information. As before, make sure to include a short title such as "Product 1"

For products 2 and 3, call the getProductPrice and getProductQuantity methods and display the prices and quantities in stock with appropriate labels.

For product 1, call the printProduct method to display the initial product information. Call the fillProductOrder method and attempt to order -5 product 1s. Display the number of product 1s that were shipped. Call the printProduct method again to display the updated product information.

For product 1, call the printProduct method to display the initial product information. Call the fillProductOrder method and attempt to order 12 product 1s. Display the number of product 1s that were shipped. Call the printProduct method again to display the updated product information.

For product 2, call the printProduct method to display the initial product information. Call the fillProductOrder method and attempt to order 4 product 2s. Display the number of product 2s that were shipped. Call the printProduct method again to display the updated product information.

For product 2, call the printProduct method to display the initial product information. Call the fillProductOrder method and attempt to order 45 product 2s. Display the number of product 2s that were shipped. Call the printProduct method again to display the updated product information.

Programming Notes
Each method must have a documentation box like a function.

Hand in a copy of the source code using Blackboard.

Output
***** The 3 products *****

Product 1
                                                               0.00     0

Product 2
22222222222  Virtual Education Pack                            0.99    31

Product 3
33333333333  Dehydrated Water Bed                              0.00     0



***** Product 1 after using the set methods *****

Product 1
11111111111  Flowbee Pet Groomer                             339.99    28



***** Product 2 and 3s price and quantity *****

Product 2 Price: $0.99     Quantity in Stock: 31

Product 3 Price: $0.00     Quantity in Stock: 0



***** Order a negative number of Product 1s *****

11111111111  Flowbee Pet Groomer                             339.99    28

Shipped: 0

11111111111  Flowbee Pet Groomer                             339.99    28



***** Order 12 Product 1s *****

11111111111  Flowbee Pet Groomer                             339.99    28

Shipped: 12

11111111111  Flowbee Pet Groomer                             339.99    16



***** Order 4 Product 2s *****

22222222222  Virtual Education Pack                            0.99    31

Shipped: 4

22222222222  Virtual Education Pack                            0.99    27



***** Order 45 Product 2s *****

22222222222  Virtual Education Pack                            0.99    27

Shipped: 27

22222222222  Virtual Education Pack                            0.99     0
Extra Credit
For up to 5 points of extra credit, add code that will calculate and display the total cost of each order that was placed for the last 4 bullet points in the description for main(). The costs must be displayed with exactly 2 digits after the decimal point and a leading dollar sign.

Note about extra credit: the points will ONLY be awarded if the required portions of the assignment work correctly. In other words, don't take short cuts in the rest of the program because it is assumed that 5 extra points will be awarded.

Extra Credit Output
***** The 3 products *****

Product 1
                                                               0.00     0

Product 2
22222222222  Virtual Education Pack                            0.99    31

Product 3
33333333333  Dehydrated Water Bed                              0.00     0



***** Product 1 after using the set methods *****

Product 1
11111111111  Flowbee Pet Groomer                             339.99    28



***** Product 2 and 3s price and quantity *****

Product 2 Price: $0.99     Quantity in Stock: 31

Product 3 Price: $0.00     Quantity in Stock: 0



***** Order a negative number of Product 1s *****

11111111111  Flowbee Pet Groomer                             339.99    28

Shipped: 0     Order Total: $0.00

11111111111  Flowbee Pet Groomer                             339.99    28



***** Order 12 Product 1s *****

11111111111  Flowbee Pet Groomer                             339.99    28

Shipped: 12     Order Total: $4079.88

11111111111  Flowbee Pet Groomer                             339.99    16



***** Order 4 Product 2s *****

22222222222  Virtual Education Pack                            0.99    31

Shipped: 4     Order Total: $3.96

22222222222  Virtual Education Pack                            0.99    27



***** Order 45 Product 2s *****

22222222222  Virtual Education Pack                            0.99    27

Shipped: 27     Order Total: $26.73

22222222222  Virtual Education Pack                            0.99     0
