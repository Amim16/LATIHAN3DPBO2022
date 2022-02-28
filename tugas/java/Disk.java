public class Disk {

    // atribut
    private String type;
    private int capacity;
    private int price;

    // constructor
    public Disk(){}

    public Disk(String type, int capacity, int price) {
        this.setType(type);
        this.setCapacity(capacity);
        this.setPrice(price);
    }

    // setter n getter
    public void setPrice(int price) {
        this.price = price;
    }

    public int getPrice() {
        return price;
    }

    public void setCapacity(int capacity) {
        this.capacity = capacity;
    }

    public int getCapacity() {
        return capacity;
    }

    public void setType(String type) {
        this.type = type;
    }

    public String getType() {
        return type;
    }
}