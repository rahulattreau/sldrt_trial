import serial
import argparse
import binascii
from time import sleep


def test_comms(port):
    sleep(2)  # Sleep 2 seconds to let serial port recover from flush
    print("*** Comms Test ***")
    print("Sending Test Packet...")  # 0xEF020001F2
    # Un-comment one of the follow two test_message variable assignments to test two different message types
    test_message = bytearray([0xEF, 0x03, 0x00, 0x01, 0x02, 0xF5])
    # test_message = bytearray([0xEF, 0x05, 0x01, 0x01, 0x02, 0x03, 0x04, 0xFF])
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

