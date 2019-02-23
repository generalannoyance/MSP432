/************************************************************************

name:           UART Base Library
desription:     Provides basic read/write operations over UART, specifically the ??? bus
                of the MSP432
auhor:          generalannoyance



Copyright (C) 2019  generalannoyance

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
************************************************************************/

void initUART_A3(void);
void EUSCIA3_IRQHandler(void);
void transmitUART(uint8_t data);
uint8_t receiveUART(void);

