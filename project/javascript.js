<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Contact Us - JS + C</title>
    <style>
        body {
            font-family: Arial, sans-serif;
            padding: 40px;
            background-color: #f8f8f8;
        }

        form {
            background-color: white;
            padding: 20px;
            max-width: 500px;
            margin: auto;
            border-radius: 8px;
            box-shadow: 0 0 10px rgba(0,0,0,0.1);
        }

        input, textarea {
            width: 100%;
            padding: 10px;
            margin-top: 10px;
            margin-bottom: 20px;
            border-radius: 4px;
            border: 1px solid #ccc;
        }

        button {
            background-color: #27ae60;
            color: white;
            border: none;
            padding: 12px 20px;
            font-size: 16px;
            cursor: pointer;
            border-radius: 4px;
        }

        #response {
            max-width: 500px;
            margin: 20px auto;
            background: #dff0d8;
            color: #3c763d;
            padding: 15px;
            border-radius: 5px;
            display: none;
        }
    </style>
</head>
<body>

<h1>Contact Us</h1>
<form id="contactForm">
    <label>Name:</label>
    <input type="text" name="name" required>

    <label>Email:</label>
    <input type="email" name="email" required>

    <label>Message:</label>
    <textarea name="message" rows="5" required></textarea>

    <button type="submit">Send Message</button>
</form>

<div id="response"></div>

<script>
document.getElementById("contactForm").addEventListener("submit", function(e) {
    e.preventDefault();

    const form = e.target;
    const formData = new URLSearchParams(new FormData(form)).toString();

    fetch("/cgi-bin/contact.cgi", {
        method: "POST",
        headers: {
            "Content-Type": "application/x-www-form-urlencoded"
        },
        body: formData
    })
    .then(response => response.text())
    .then(data => {
        document.getElementById("response").style.display = "block";
        document.getElementById("response").innerHTML = data;
        form.reset();
    })
    .catch(error => {
        document.getElementById("response").style.display = "block";
        document.getElementById("response").innerHTML = "Error sending message!";
        console.error(error);
    });
});
</script>

</body>
</html>
