record Point (int x, int y) {
    public Point {
        if (x < 0 || y < 0) {
            throw new IllegalArgumentException("x and y must be non-negative");
        }
    }
}
