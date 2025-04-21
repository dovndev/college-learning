# Restaurant Website

This project is a modern restaurant website built using WebAssembly, HTML, CSS, and JavaScript. It features a beautiful and responsive user interface with four main pages: Home, Menu, About, and Contact.

## Project Structure

```
restaurant-website
├── src
│   ├── main.c            # C code compiled to WebAssembly
│   ├── index.html        # Main entry point of the website
│   ├── styles            # Directory for CSS styles
│   │   └── style.css     # Styles for the website
│   ├── scripts           # Directory for JavaScript files
│   │   └── app.js        # JavaScript for interactivity
│   ├── pages             # Directory for HTML pages
│   │   ├── home.html     # Home page content
│   │   ├── menu.html     # Menu page content
│   │   ├── about.html    # About page content
│   │   └── contact.html   # Contact page content
├── wasm
│   └── main.wasm         # Compiled WebAssembly binary
├── Makefile              # Build instructions for WebAssembly
└── README.md             # Project documentation
```

## Setup Instructions

1. **Clone the repository:**
   ```
   git clone <repository-url>
   cd restaurant-website
   ```

2. **Build the WebAssembly module:**
   Ensure you have the necessary tools installed (e.g., Emscripten). Run the following command:
   ```
   make
   ```

3. **Open the website:**
   Open `src/index.html` in your web browser to view the restaurant website.

## Usage

- Navigate through the website using the navigation menu.
- The Menu page showcases the restaurant's offerings.
- The About page provides information about the restaurant's history and mission.
- The Contact page includes a contact form and location details.

## Contributing

Feel free to submit issues or pull requests for improvements or features. 

## License

This project is licensed under the MIT License.