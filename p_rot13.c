#include "main.h"
/**
  * p_rot13 - encodes a string into rot13.
  * @R: string to convert
  * Return: size the output text
  */
int p_rot13(va_list R)
{
	int j, i, count = 0;
	char *r;
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ abcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLM nopqrstuvwxyzabcdefghijklm";

	r = va_arg(R, char *);
	if (r == NULL)
		r = "(null)";
	for (j = 0; r[j] != '\0'; j++)
	{
		char found = 0;
		for (i = 0; i < 52; i++)
		{
			if (r[j] == inpufor (j = 0; r[j] != '\0'; j++)
					{
							char found = 0;
									for (i = 0; i < 52; i++)
									{
												if (r[j] == input[i])
												{
																_putchar(output[i]);
																				count++;
																								found = 1;
																												break;
																												}
																												}
																														// Print the character as it is if not found in the rot13 mapping
																														// 		if (!found)
																														// 				{
																														// 							_putchar(r[j]);
																														//for (j = 0; r[j] != '\0'; j++)
																														//	{
																														//			char found = 0;
																														//					for (i = 0; i < 52; i++)
																														//							{
																														//										if (r[j] == input[i])
																														//													{
																														//																	_putchar(output[i]);
																														//																					count++;
																														//																									found = 1;
																														//																													break;
																														//																																}
																														//																																		}
																														//																																				// Print the character as it is if not found in the rot13 mapping
																														//																																						if (!found)
																														//																																								{
																														//																																											_putchar(r[j]);
																														//																																														count++;
																														//																																																}
																														//						for (j = 0; r[j] != '\0'; j++)
																														//							{
																														//									char found = 0;
																														//											for (i = 0; i < 52; i++)
																														//													{
																														//																if (r[j] == input[i])
																														//																			{
																														//																							_putchar(output[i]);
																														//																											count++;
																														//																															found = 1;
																														//																																			break;
																														//																																						}
																														//																																								}
																														//																																										// Print the character as it is if not found in the rot13 mapping
																														//																																												if (!found)
																														//																																														{
																														//																																																	_putchar(r[j]);
																														//																																																				count++;
																														//																																																						}
																														//																								for (j = 0; r[j] != '\0'; j++)
																														//																									{
																														//																											char found = 0;
																														//																													for (i = 0; i < 52; i++)
																														//																															{
																														//																																		if (r[j] == input[i])
																														//																																					{
																														//																																									_putchar(output[i]);
																														//																																													count++;
																														//																																																	found = 1;
																														//																																																					break;
																														//																																																								}
																														//																																																										}
																														//																																																												// Print the character as it is if not found in the rot13 mapping
																														//																																																														if (!found)
																														//																																																																{
																														//																																																																			_putchar(r[j]);
																														//																																																																						count++;
																														//																																																																								}
																														//																																																																									}
			for (j = 0; r[j] != '\0'; j++)
			{
						char found = 0;
								for (i = 0; i < 52; i++)
								{
												if (r[j] == input[i])
												{
																	_putchar(output[i]);
																					count++;
																									found = 1;
																													break;
												}
								}
										// Print the character as it is if not found in the rot13 mapping
										// 	for (j = 0; r[j] != '\0'; j++)
										// 		{
										// 				char found = 0;
										// 						for (i = 0; i < 52; i++)
										// 								{
										// 											if (r[j] == input[i])
										// 														{
										// 																		_putchar(output[i]);
										// 																						count++;
										// 																										found = 1;
										// 																														break;
										// 																																	}
										// 																																			}
										// 																																					// Print the character as it is if not found in the rot13 mapping
										// 																																							if (!found)
										// 																																									{
										// 																																												_putchar(r[j]);
										// 																																															count++;
										// 																																			for (j = 0; r[j] != '\0'; j++)
										// 																																				{
										// 																																						char found = 0;
										// 																																								for (i = 0; i < 52; i++)
										// 																																										{
										// 																																													if (r[j] == input[i])
										// 																																																{
										// 																																																				_putchar(output[i]);
										// 																																																								count++;
										// 																																																												found = 1;
										// 																																																																break;
										// 																																																																			}
										// 																																																																					}
										// 																																																																							// Print the character as it is if not found in the rot13 mapping
										// 																																																																									if (!found)
										// 																																																																											{
										// 																																																																														_putchar(r[j]);
										// 																																																																																	count++;
										// 																																																																																			}
										// 																																																																									for (j = 0; r[j] != '\0'; j++)
										// 																																																																										{
										// 																																																																												char found = 0;
										// 																																																																														for (i = 0; i < 52; i++)
										// 																																																																																{
										// 																																																																																			if (r[j] == input[i])
										// 																																																																																						{
										// 																																																																																										_putchar(output[i]);
										// 																																																																																														count++;
										// 																																																																																																		found = 1;
										// 																																																																																																						break;
										// 																																																																																																									}
										// 																																																																																																											}
										// 																																																																																																													// Print the character as it is if not found in the rot13 mapping
										// 																																																																																																															if (!found)
										// 																																																																																																																	{
										// 																																																																																																																				_putchar(r[j]);
										// 																																																																																																																							count++;
										// 																																																																																																																									}
										// 																																																																																																																										}
										// 																																																		for (j = 0; r[j] != '\0'; j++)
										// 																																																			{
										// 																																																					char found = 0;
										// 																																																							for (i = 0; i < 52; i++)
										// 																																																									{
										// 																																																												if (r[j] == input[i])
										// 																																																															{
										// 																																																																			_putchar(output[i]);
										// 																																																																							count++;
										// 																																																																											found = 1;
										// 																																																																															break;
										// 																																																																																		}
										// 																																																																																				}
										// 																																																																																						// Print the character as it is if not found in the rot13 mapping
										// 																																																																																								if (!found)
										// 																																																																																										{
										// 																																																																																													_putchar(r[j]);
										// 																																																																																																count++;
										// 																																																																																																		}
										// 																																																																																																			}
										// 				for (j = 0; r[j] != '\0'; j++)
										// 					{
										// 							char found = 0;
										// 									for (i = 0; i < 52; i++)
										// 											{
										// 														if (r[j] == input[i])
										// 																	{
										// 																					_putchar(output[i]);
										// 																									count++;
										// 																													found = 1;
										// 																																	break;
										// 																																				}
										// 																																						}
										// 																																								// Print the character as it is if not found in the rot13 mapping
										// 																																										if (!found)
										// 																																												{
										// 																																															_putchar(r[j]);
										// 																																																		count++;
										// 																																															for (j = 0; r[j] != '\0'; j++)
										// 																																																{
										// 																																																		char found = 0;
										// 																																																				for (i = 0; i < 52; i++)
										// 																																																						{
										// 																																																									if (r[j] == input[i])
										// 																																																												{
										// 																																																																_putchar(output[i]);
										// 																																																																				count++;
										// 																																																																								found = 1;
										// 																																																																												break;
										// 																																																																															}
										// 																																																																																	}
										// 																																																																																			// Print the character as it is if not found in the rot13 mapping
										// 																																																																																					if (!found)
										// 																																																																																							{
										// 																																																																																										_putchar(r[j]);
										// 																																																																																													count++;
										// 																																																																																															}
										// 																																																																																																}
										/for (j = 0; r[j] != '\0'; j++)
										{
													char found = 0;
															for (i = 0; i < 52; i++)
															{
																			if (r[j] == input[i])
																			{
																								_putchar(output[i]);
																												count++;
																																found = 1;
																																				break;
																			}
															}
																	// Print the character as it is if not found in the rot13 mapping
																	// 		if (!found)
																	// 				{
										for (j = 0; r[j] != '\0'; j++)
										{
													char found = 0;
															for (i = 0; i < 52; i++)
															{
																			if (r[j] == input[i])
																			{
																								_putchar(output[i]);
																												count++;
																																found = 1;
																																				break;
																			}
															}
																	// Print the character as it is if not found in the rot13 mapping
																	// 		if (!found)
																	// 				{
										for (j = 0; r[j] != '\0'; j++)
										{
													char found = 0;
															for (i = 0; i < 52; i++)
															{
																			if (r[j] == input[i])
																			{
																								_putchar(output[i]);
																												count++;
																																found = 1;
																																				break;
																			}
															}
																	// Print the character as it is if not found in the rot13 mapping
																	// 		if (!found)
																	// 				{
																	// 							_putchar(r[j]);
																	// 										count++;
																	// 												}
																	// 													}
																	// 														return (count);
																	// 														}
