# This repository immplemets following design patterns in C++ (Referred from : https://refactoring.guru/)

## Creational
### 1. Factory Pattern
<br>
Factory Method is a creational design pattern that provides an interface for creating objects in a superclass, but allows subclasses to alter the type of objects that will be created.

![](images/Factory.png)

### 2. Abstract Factory
<br>
Abstract Factory is a creational design pattern that lets you produce families of related objects without specifying their concrete classes.

![](images/AbstractFactory.png)

### 3. Builder
<br>
Builder is a creational design pattern that lets you construct complex objects step by step. The pattern allows you to produce different types and representations of an object using the same construction code.

![](images/Builder.png)

### 4. Prototype
<br>
Prototype is a creational design pattern that lets you copy existing objects without making your code dependent on their classes.

![](images/Prototype.png)


## Structural
### 1. Adaptor
<br>
Adapter is a structural design pattern that allows objects with incompatible interfaces to collaborate.

![](images/Adaptor.png)

### 2. Bridge
<br>
Bridge is a structural design pattern that lets you split a large class or a set of closely related classes into two separate hierarchies—abstraction and implementation—which can be developed independently of each other.

![](images/Bridge.png)

### 3. Composite
<br>
Composite is a structural design pattern that lets you compose objects into tree structures and then work with these structures as if they were individual objects.

![](images/Composite.png)

### 4. Decorator
<br>
Decorator is a structural design pattern that lets you attach new behaviors to objects by placing these objects inside special wrapper objects that contain the behaviors.
### 
![](images/Decorator.png)

### 5. Facade
<br>
Facade is a structural design pattern that provides a simplified interface to a library, a framework, or any other complex set of classes.

![](images/Facade.png)

### 6. Flyweight
<br>
Flyweight is a structural design pattern that lets you fit more objects into the available amount of RAM by sharing common parts of state between multiple objects instead of keeping all of the data in each object.

![](images/Flyweight.png)

### 7. Proxy
<br>
Proxy is a structural design pattern that lets you provide a substitute or placeholder for another object. A proxy controls access to the original object, allowing you to perform something either before or after the request gets through to the original object.

![](images/Proxy.png)


## Behavioural
### 1. ChainOfResponsibility
<br>
Chain of Responsibility is a behavioral design pattern that lets you pass requests along a chain of handlers. Upon receiving a request, each handler decides either to process the request or to pass it to the next handler in the chain.

![](images/COR.png)

### 2. Command
<br>
Command is a behavioral design pattern that turns a request into a stand-alone object that contains all information about the request. This transformation lets you pass requests as a method arguments, delay or queue a request’s execution, and support undoable operations.

![](images/COR.png)

### 3. Iterator
<br>
Iterator is a behavioral design pattern that lets you traverse elements of a collection without exposing its underlying representation (list, stack, tree, etc.).

![](images/Iterator.png)

### 4. Mediator
<br>
Mediator is a behavioral design pattern that lets you reduce chaotic dependencies between objects. The pattern restricts direct communications between the objects and forces them to collaborate only via a mediator object.

![](images/Mediator.png)

### 5. Momento
<br>
Memento is a behavioral design pattern that lets you save and restore the previous state of an object without revealing the details of its implementation.

![](images/Momento.png)

### 6. Observer
<br>
Observer is a behavioral design pattern that lets you define a subscription mechanism to notify multiple objects about any events that happen to the object they’re observing.

![](images/Observer.png)

### 7. State
<br>
State is a behavioral design pattern that lets an object alter its behavior when its internal state changes. It appears as if the object changed its class.

![](images/State.png)

### 8. Strategy
<br>
Strategy is a behavioral design pattern that lets you define a family of algorithms, put each of them into a separate class, and make their objects interchangeable.

![](images/Strategy.png)

### 9. Template
<br>
Template Method is a behavioral design pattern that defines the skeleton of an algorithm in the superclass but lets subclasses override specific steps of the algorithm without changing its structure.

![](images/Template.png)

### 10. Visitor
<br>
Visitor is a behavioral design pattern that lets you separate algorithms from the objects on which they operate.

![](images/Visitor.png)