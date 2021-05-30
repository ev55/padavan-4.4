/*
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston,
 * MA 02111-1307 USA
 */

#ifndef _GPIO_PINS_H_
#define _GPIO_PINS_H_

void gpio_led_trig_set(int led, const char* trig_name);
void gpio_led_set(int led, int value);

int cpu_gpio_get_pin(int pin, unsigned int *p_value);
int cpu_gpio_irq_set(unsigned int irq_pin, int rising_edge, int falling_edge, pid_t pid);

#endif
