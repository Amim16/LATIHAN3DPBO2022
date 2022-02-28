public class Pc {
    // atribut
    private Disk disk;
    private Processor processor;
    private Ram ram;
    private int totalPrice;

    // construcor
    public Pc(){}

    public Pc(Disk disk, Processor processor, Ram ram) {
        this.disk = disk;
        this.processor = processor;
        this.ram = ram;
        this.totalPrice = this.ram.getPrice() + this.processor.getPrice() + this.disk.getPrice();
    }

    // setter n getter
    public void setTotalPrice(int totalPrice) {
        this.totalPrice = totalPrice;
    }

    public int getTotalPrice() {
        return totalPrice;
    }

    public void setDisk(Disk disk) {
        this.disk = disk;
    }

    public Disk getDisk() {
        return disk;
    }

    public void setProcessor(Processor processor) {
        this.processor = processor;
    }

    public Processor getProcessor() {
        return processor;
    }

    public void setRam(Ram ram) {
        this.ram = ram;
    }

    public Ram getRam() {
        return ram;
    }
}