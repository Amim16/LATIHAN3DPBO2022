public class Ram {
    // atribut
    private int capacity;
    private int price;

    // constructor
    public Ram(){}

    public Ram(int capacity, int price) {
        this.capacity = capacity;
        this.price = price;
    }

    // setter n getter
    public void setCapacity(int capacity) {
        this.capacity = capacity;
    }
    
    public int getCapacity() {
        return capacity;
    }
    
    public void setPrice(int price) {
        this.price = price;
    }

    public int getPrice() {
        return price;
    }
}