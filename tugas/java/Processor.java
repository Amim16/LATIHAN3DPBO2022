public class Processor {
    // atribut
    private String name;
    private int price;

    // constructor
    public Processor(){}

    public Processor(String name, int price) {
        this.name = name;
        this.price = price;
    }

    // setter n getter
    public void setName(String name) {
        this.name = name;
    }
    
    public String getName() {
        return name;
    }
    
    public void setPrice(int price) {
        this.price = price;
    }

    public int getPrice() {
        return price;
    }
}