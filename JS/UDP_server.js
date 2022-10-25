let opts = {
    host: '127.0.0.1',  // UDP host
    port: 3001,  // UDP port
    relayUrl: 'http://127.0.0.1:5500/JS/UDP_server.html'  // Relay server address
}

let socket = BrowserSocket.createUdpSocket(opts)
socket.once('error', (err) => { console.log('error event') })
socket.on('message', (msg) => {
    msg="string";
})

socket.close()