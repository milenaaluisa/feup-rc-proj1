#ifndef _RECEIVER_H_
#define _RECEIVER_H_

int rx_start_transmission(int fd);

int rx_stop_transmission(int fd);

int receive_data(int fd, char* data, int num_packets);

#endif // _RECEIVER_H_