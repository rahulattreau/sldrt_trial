import serial
import argparse
import binascii
from time import sleep


def test_comms(port):
    sleep(2) # Sleep 2 seconds to let serial port recover from flush
    print("*** Comms Test ***")
    print("Sending Test Packet...")
    test_message = bytearray([0xEF, 0x03, 0x05, 0x01, 0xF8])
    print(binascii.hexlify(test_message))
    port.write(test_message)
    response = bytearray()
    byte_count = 0
    while True:
        for rx_char in port.read():
            response.append(rx_char)
            byte_count += 1
            if byte_count == len(test_message):
                print("Response Received")
                print(binascii.hexlify(response))
                if response == test_message:
                    print("Round-trip successful!")
                    port.write(test_message)
                byte_count = 0
                response = bytearray()

    port.close()


if __name__ == '__main__':
    # Use a breakpoint in the code line below to debug your script.
    parser = argparse.ArgumentParser(description='Run Comms Test')
    parser.add_argument('port', help='Port assigned to arduino')

    args = parser.parse_args()
    try:
        serialPort = serial.Serial(args.port, 115200, timeout=2, xonxoff=True)
    except serial.SerialException as se:
        print("Couldn't find serial port")
        exit()
    test_comms(serialPort)

